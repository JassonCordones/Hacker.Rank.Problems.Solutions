# Enter your code here. Read input from STDIN. Print output to STDOUT
N = int(raw_input())
L = []
for t in range(N):
    args = raw_input().strip().split(" ")
    if args[0] == "append":
        L.append(int(args[1]))
    if args[0] == "insert":
        L.insert(int(args[1]), int(args[2]))
    if args[0] == "remove":
        L.remove(int(args[1]))
    if args[0] == "pop":
        L.pop()
    if args[0] == "sort":
        L.sort()
    if args[0] == "reverse":
        L.reverse()
    if args[0] == "print":
        print L