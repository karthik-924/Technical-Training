n=3
m=3
grid=[[1,2,7],[4,5,6],[8,8,9]]
count=0
for i in range(n):
    for j in range(m):
        if (j!=0 or j!=n) and (i!=0 and i!=n):
            if(grid[i-1][j-1]<grid[i][j] and grid[i-1][j]<grid[i][j] and grid[i-1][j+1]<grid[i][j] and grid[i][j-1]<grid[i][j] and grid[i][j+1]<grid[i][j] and grid[i+1][j-1]<grid[i][j] and grid[i+1][j]<grid[i][j] and grid[i+1][j+1]<grid[i][j]):
                count+=1
        
