import tkinter as tk
import os


class NumberDisplay:
    def __init__(self, limit):
        self.__limit = limit
        self.__value = 0

    def get_display(self):
        return str(self.__value).zfill(2)

    def increment(self):
        self.__value = (self.__value + 1) % self.__limit


class ClockDisplay:
    def __init__(self, hours_limit, minutes_limit, seconds_limit):
        self.__hours = NumberDisplay(hours_limit)
        self.__minutes = NumberDisplay(minutes_limit)
        self.__seconds = NumberDisplay(seconds_limit)   

    def tick(self):
        self.__seconds.increment()
        if self.__seconds.get_display() == "00":
            self.__minutes.increment()
            if self.__minutes.get_display() == "00":
                self.__hours.increment()

    def get_time(self):
        return f"{self.__hours.get_display()}:{self.__minutes.get_display()}:{self.__seconds.get_display()}"


class ClockApp:
    def __init__(self, root):
        self.root = root
        self.clock = ClockDisplay(24, 60, 60)
        self.time_label = tk.Label(
            root, text=self.clock.get_time(), font=("Arial", 40))
        self.time_label.pack()
        self.start_button = tk.Button(
            root, text="Iniciar", command=self.start_clock)
        self.start_button.pack()
        self.stop_button = tk.Button(
            root, text="Parar", command=self.stop_clock, state=tk.DISABLED)
        self.stop_button.pack()
        self.clock_running = False
        self.reset_button = tk.Button(
            root, text="Zerar", command=self.reset_clock, state=tk.DISABLED)
        self.reset_button.pack()

    def start_clock(self):
        if not self.clock_running:
            self.clock_running = True
            self.start_button.config(state=tk.DISABLED)
            self.stop_button.config(state=tk.NORMAL)
            self.reset_button.config(state=tk.DISABLED)
            self.update_clock()

    def update_clock(self):
        if self.clock_running:
            self.clock.tick()
            self.time_label.config(text=self.clock.get_time())
            self.root.after(1000, self.update_clock)

    def stop_clock(self):
        self.clock_running = False
        self.start_button.config(state=tk.NORMAL)
        self.stop_button.config(state=tk.DISABLED)
        self.reset_button.config(state=tk.NORMAL)

    def run(self):
        self.root.mainloop()

    def reset_clock(self):
        self.clock = ClockDisplay(24, 60, 60)
        self.time_label.config(text=self.clock.get_time())
        self.start_button.config(state=tk.NORMAL)
        self.stop_button.config(state=tk.DISABLED)
        self.reset_button.config(state=tk.DISABLED)


if __name__ == "__main__":
    # os.system("cls")
    root = tk.Tk()
    root.title("Clock App")
    app = ClockApp(root)
    app.run()
