n = int(input())

class Person:
    def __init__(self,name:str,address:str,loc:str):
        self.name=name
        self.address=address
        self.loc=loc
    def __repr__(self):
        return f'name {self.name}\naddr {self.address}\ncity {self.loc}'
    def __lt__(self,other):
        return self.name<other.name

people=[Person(*input().split()) for _ in range(n)]

print(max(people))
# Please write your code here.
