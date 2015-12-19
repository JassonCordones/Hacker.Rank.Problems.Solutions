# Enter your code here. Read input from STDIN. Print output to STDOUT

N = int(raw_input())
for i in range(N):
    T = map(int, raw_input().split(" "))
    print hash(tuple(T))
