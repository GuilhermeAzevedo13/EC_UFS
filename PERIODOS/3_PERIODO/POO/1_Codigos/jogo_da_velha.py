import tkinter as tk
from tkinter import messagebox


class TicTacToeGame:
    def __init__(self, master):
        self.__master = master
        self.master.title("Tic Tac Toe")
        self.master.geometry("300x300")

        self.current_player = "X"
        self.board = [["" for _ in range(3)] for _ in range(3)]

        self.buttons = [[None for _ in range(3)] for _ in range(3)]
        for i in range(3):
            for j in range(3):
                self.buttons[i][j] = tk.Button(
                    self.master,
                    text="",
                    font=("Arial", 20),
                    width=5,
                    height=2,
                    command=lambda row=i, col=j: self.button_click(row, col)
                )
                self.buttons[i][j].grid(row=i, column=j)

    def button_click(self, row, col):
        if self.buttons[row][col]["text"] == "":
            self.buttons[row][col]["text"] = self.current_player
            self.board[row][col] = self.current_player
            if self.check_winner(self.current_player):
                self.show_message(f"Player {self.current_player} wins!")
                self.reset_game()
            elif self.check_draw():
                self.show_message("It's a draw!")
                self.reset_game()
            else:
                self.current_player = "O" if self.current_player == "X" else "X"

    def check_winner(self, player):
        # Check rows
        for row in self.board:
            if all(cell == player for cell in row):
                return True

        # Check columns
        for col in range(3):
            if all(self.board[row][col] == player for row in range(3)):
                return True

        # Check diagonals
        if self.board[0][0] == self.board[1][1] == self.board[2][2] == player:
            return True
        if self.board[0][2] == self.board[1][1] == self.board[2][0] == player:
            return True

        return False

    def check_draw(self):
        return all(all(cell != "" for cell in row) for row in self.board)

    def show_message(self, message):
        messagebox.showinfo("Game Over", message)

    def reset_game(self):
        for i in range(3):
            for j in range(3):
                self.buttons[i][j]["text"] = ""
                self.board[i][j] = ""
        self.current_player = "X"


if __name__ == "__main__":
    root = tk.Tk()
    game = TicTacToeGame(root)
    root.mainloop()
