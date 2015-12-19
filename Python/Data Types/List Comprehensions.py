x = int(input())
y = int(input())
z = int(input())
n = int(input())
px = range(0,x+1)
py = range(0,y+1)
pz = range(0,z+1)
lis = [[px[i],py[j],pz[k]] for i in px for j in py for k in pz if px[i]+py[j]+pz[k] != n]
print (lis)
