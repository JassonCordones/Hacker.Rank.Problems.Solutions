# Enter your code here. Read input from STDIN. Print output to STDOUT

d = {}
n = int(raw_input())
for i in range(n):
    line = raw_input()
    name = line.split(" ")
    marks = float(name[1]) + float(name[2]) + float(name[3])
    marksav = marks/3;
    d[name[0]] = marksav
j = raw_input()
print ("%.2f" % d[j])