from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.edge.options import Options
from selenium.common.exceptions import TimeoutException, NoSuchElementException

def main():
    try:
        # Inizializza il driver di Edge in modalità headless
        options = Options()
        options.use_chromium = True
        options.add_argument('--headless')

        # Inizializza il driver di Edge con le opzioni
        driver = webdriver.Edge(options=options)
        
        # Esegui il processo di traduzione
        translate_process(driver)
    
    except Exception as e:
        print("Si è verificato un errore:", e)
    
    finally:
        # Chiudi il driver alla fine, indipendentemente dall'output
        if 'driver' in locals():
            driver.quit()

def translate_process(driver):
    # Apri il sito Bing
    driver.get('https://www.bing.com')

    # Trova la casella di ricerca e cerca "google translate"
    search_box = WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.ID, 'sb_form_q')))
    search_box.send_keys('google translate')
    search_box.submit()

    # Trova la casella di input su Google Translate
    input_box = WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.ID, 'tta_input_ta')))
    
    # Ottieni l'input dall'utente
    ris1 = input("ITA to ENG: ")
    
    # Inserisci l'input nella casella di input
    input_box.clear()
    input_box.send_keys(ris1)
    
    try:
        # Attendi che il risultato sia disponibile
        result_box = WebDriverWait(driver, 20).until(
            EC.visibility_of_element_located((By.ID, 'tta_output_ta')) &
            EC.text_to_be_present_in_element((By.ID, 'tta_output_ta'), ''))
        
        # Stampa il risultato
        print("Translation:")
        print(result_box.text)
        
    except (TimeoutException, NoSuchElementException):
        print("Impossibile ottenere il risultato o la traduzione non è disponibile.")

if __name__ == "__main__":
    main()





