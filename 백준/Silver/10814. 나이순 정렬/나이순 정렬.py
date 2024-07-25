import sys
input = sys.stdin.readline

T = int(input())

members = [[] for _ in range(201)]

for test in range(T):
    age, name = map(str, input().split())
    members[int(age)].append(name)

for member_age in range(len(members)):
    if len(members[member_age]) > 0:
        for member_name in members[member_age]:
            print(member_age, member_name)