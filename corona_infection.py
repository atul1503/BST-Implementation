def infected(l,f,status):
    for i in range(len(l)):
        for j in range(len(l[i])):
            if status[i]==1 and l[i][j]==1:
                status[j]=1
    return l,f,status
    
    
def display(l,f,status):
    for i in range(n):
        if status[i]==1:
            print(f[i],'is infected.')
        else:
            print(f[i],'is not infected')
    
l=[]
f=[]
status=[]
n=int(input('Enter the size of Friend Graph:'))
print('Enter the Friends name:')
for i in range(n):
    f.append(input())
print('Enter the Friend Graph')
for i in range(n):
    ll=[]
    print('Enter the relations of',f[:],'with',f[i],'using 0 or 1')
    for j in range(n):
        ll.append(int(input()))
    l.append(ll)
print('Enter the infection status of all friends,in 0 or 1:')
for i in range(n):
    status.append(int(input()))
l,f,status=infected(l,f,status)
display(l,f,status)
input()
input()
    
    
    