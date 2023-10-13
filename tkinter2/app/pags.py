import tkinter as tk
from tkinter import ttk
import ttkbootstrap as tkb
from tkinter import messagebox
from .func import setting_database, gestione_inserimento_tab_CODE
import subprocess

#LOGIN
class login(tk.Tk):
    def  __init__(self):
        tk.Tk.__init__(self)
        self.title("Dimmi chi sei...")
        self.maxsize(200,100)
        
        label1 = tk.Label(self, text="parola D'ordine")
        label1.pack(pady=5)

        self.input1 = tk.Entry(self)
        self.input1.pack(pady=5)

        btn = tk.Button(self, text="Invia", command=self._in)
        btn.pack(pady=5)

    def _in(self):
        enter = self.input1.get()
        check1 = setting_database(enter)
        if check1:
            self.destroy()
            Home().mainloop()



class Home(tk.Tk):
    def __init__(self, *args, **kwargs):
        tk.Tk.__init__(self, *args, **kwargs)
        self.title("SCHEDA1")
        self.maxsize(500,500)

        label = tk.Label(self, text="ctrl+h ---> helpPage")
        label.pack()

        notebook = tkb.Notebook(self, width=350, height=250)
        notebook.place(x=20, y=50)

        frame1 = tkb.Frame(notebook, width=350, height=250)
        notebook.add(frame1, text='Tab1')       

        frame3 = tkb.Frame(notebook, width=550, height=350)
        notebook.add(frame3, text='code')
        self.label3 = tkb.Text(frame3)
        self.label3.pack()

        self.bind("<Control-KeyPress-k>", self.ritorno_testo_tab_CODE)


    def ritorno_testo_tab_CODE(self, event=None):   
        text = self.label3.get("1.0", "end-1c")  
        gestione_inserimento_tab_CODE(text)

    
        
            
            
            



class login_piu(tk.Toplevel):
    def __init__(self,parent):
        super().__init__(parent)
        pass