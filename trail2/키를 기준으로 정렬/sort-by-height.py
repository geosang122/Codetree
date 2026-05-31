n = int(input())
people=[]

class person:
    def __init__(self,n,h,w):
        self.name=n
        self.height=h
        self.weight=w

    def __repr__(self):
        return f'{self.name} {self.height} {self.weight}'

for _ in range(n):
    n_i, h_i, w_i = input().split()
    people.append(person(n_i,h_i,w_i))

# Please write your code here.

people.sort(key=lambda x:x.height)

for w in people:
    print(w)