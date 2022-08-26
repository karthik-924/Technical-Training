def getMinCost(crew_id, job_id):
    # Write your code here
    s=0
    crew_id.sort(reverse=True)
    job_id.sort(reverse=True)
    for i in range(len(crew_id)):
        s+=abs(crew_id[i]-job_id[i])
    return s
getMinCost([5,3,1,4,6],[9,8,3,15,1])