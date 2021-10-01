#n=int(input())
arr=[-4,-3,-2,-6,-14,-7,-1,-4,-5,-7,-10,-2,-9,-10,-5,-9,-6,-1]
curr_best=arr[0]
overall_best=arr[0]
for i in range(1,len(arr)):



    if (curr_best >=0):
        curr_best=curr_best+arr[i]

    else:
        curr_best=arr[i]

    if(curr_best> overall_best):
        overall_best=curr_best
        print(overall_best)


