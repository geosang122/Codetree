

# Please write your code here.

class user:
    def __init__(self,id='codetree',level=10):
        self.id=id
        self.level=level
    def __repr__(self):
        return f'user {self.id} lv {self.level}'
user1=user()
user2_id, user2_level = input().split()
user2_level = int(user2_level)
user2=user(user2_id,user2_level)

print(user1)
print(user2)