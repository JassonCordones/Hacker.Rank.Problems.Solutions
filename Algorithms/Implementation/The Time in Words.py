# Enter your code here. Read input from STDIN. Print output to STDOUT
H = int(raw_input())
M = int(raw_input())
T = ["one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"]

if (M == 0):
    print T[H-1]+" o' clock"    
elif (M == 45):
    print "quarter to "+T[H]
elif (M == 15):
    print "quarter past "+T[H-1]
elif (M < 30 and M != 1):
    print T[M-1]+" minutes past "+T[H-1]
elif (M == 1):
    print T[M-1]+" minute past "+T[H-1]
elif (M > 30 and T[abs(M-60+1)] == T[0]):
    print T[abs(M-60+1)]+" minute to "+T[H]
elif (M > 30 and T[abs(M-60+1)] != T[16]):
    print T[abs(M-60+1)]+" minutes to "+T[H]

else:
    print "half past "+T[H-1]
