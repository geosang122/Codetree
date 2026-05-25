MAX_N = 5
class Agent:
    def __init__(self,codename:str,score:str):
        self.codename=codename
        self.score=int(score)
    def __lt__(self,other):
        return self.score<other.score
    def __repr__(self):
        return f'{self.codename} {self.score}'

agent = [Agent(*input().split()) for _ in range(MAX_N)]

# Please write your code here.


print(min(agent))