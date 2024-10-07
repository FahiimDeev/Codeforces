n, k = map(int, input().split())

remaining_time = 240 - k

time_spent = 0
solved_problems = 0

for i in range(1, n + 1):
    time_for_problem = 5 * i 
    if time_spent + time_for_problem <= remaining_time:
        time_spent += time_for_problem
        solved_problems += 1
    else:
        break

print(solved_problems)
