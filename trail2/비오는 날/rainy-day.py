n = int(input())

class Weather:
    def __init__(self, date,day,weather):
        self.date=date
        self.day=day
        self.weather=weather
    def __lt__(self,other):
        return self.date<other.date
    def __repr__(self):
        return f'{self.date} {self.day} {self.weather}'

w=[Weather(*input().split()) for _ in range(n)]
w.sort()
for we in w:
    if we.weather=='Rain':
        print(we)
        break

# Please write your code here.