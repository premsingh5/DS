import sys
import imagematrix
from collections import defaultdict
class ResizeableImage(imagematrix.ImageMatrix):
    def least (self,arr, indices):
        mini = float('inf')
        index=None
        for (a,b) in indices:
            if arr[a][b] < mini:
                min=arr[a][b]
                index=(a,b)
        return mini,index

    def best_seam(self):
        val=defaultdict(list)
        DP =[[ None for j in range(self.width)] for i in range(self.height)]
        for i in range(self.height):
            DP[i][0] = self.energy(i,0)
            val[(i,0)]=[(i,0)]
        for j in range(1,self.width):
            for i in range(self.height):
                indices= []
                if i>=1 and (i<self.height-1):
                    indices =[(i,j-1),(i+1,j-1),(i-1,j-1)]
                elif i<1:
                    indices =[(i,j-1),(i+1,j-1)]
                elif i>self.height-1:
                    indices = [(i,j-1),(i-1,j-1)]

                k,index=self.least(DP,indices)
                DP[i][j]=k+self.energy(i,j)
                val[(i,j)] = val[index]+[(i,j)]
        lin = float('inf')
        ind = None
        for i in range(self.height):
            if DP[i][self.width-1]<Min:
                lin=DP[i][self.width-1]
                ind = i
        return val[(ind,self.width-1)]







    def remove_best_seam(self):
        self.remove_seam(self.best_seam())
