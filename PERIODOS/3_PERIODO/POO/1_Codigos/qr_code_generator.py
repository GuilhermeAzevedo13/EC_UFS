import tkinter as tk
import qrcode
from PIL import ImageTk, Image


def generate_qr_code():
    link = link_entry.get()
    qr = qrcode.QRCode(
        version=1, error_correction=qrcode.constants.ERROR_CORRECT_L, box_size=10, border=4)
    qr.add_data(link)
    qr.make(fit=True)
    img = qr.make_image(fill_color="black", back_color="white")
    img = img.resize((200, 200), Image.ANTIALIAS)
    img_tk = ImageTk.PhotoImage(img)
    qr_code_label.configure(image=img_tk)
    qr_code_label.image = img_tk


root = tk.Tk()
root.title("QR Code Generator")

link_label = tk.Label(root, text="Link:")
link_label.pack()

link_entry = tk.Entry(root, width=40)
link_entry.pack()

generate_button = tk.Button(
    root, text="Gerar QR Code", command=generate_qr_code)
generate_button.pack()

qr_code_label = tk.Label(root)
qr_code_label.pack()

root.mainloop()
