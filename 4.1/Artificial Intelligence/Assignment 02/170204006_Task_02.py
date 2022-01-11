graph=[
    ('I', 'A', 25),  
    ('A', 'C', 21),  
    ('I', 'B', 41),  
    ('A', 'D', 28),  
    ('B', 'D', 27), 
    ('B', 'E', 39),  
    ('B', 'F', 21),  
    ('C', 'D', 33),  
    ('C', 'G', 38),  
    ('D', 'G', 36),  
    ('E', 'G', 31)
    
]

visited = [0] * len(graph)
all_paths = []

def pathFind(start,end, weight=[]):
    
    if start == end:
        all_paths.append(list(weight))
        
    i = 0
    child = ''
    while i <= len(graph)-1:
        if  visited[i] == 0 and graph[i][0] == start:
            visited[i] = 1
            child = graph[i][1]
            weight.append(( start,child,graph[i][2] , i))
            pathFind(child,end)
                 
        i+=1

    if len(weight) >= 1:
        visited[weight[len(weight)-1][3]] = 0
        weight.pop()
    
start = 'I'
end = 'G'
pathFind(start,end)

print(f"\nStart node = {start} and End node = {end} \n")
for i,target_list in enumerate( all_paths ,1):
    print(
        f"Path values {i} = {target_list} Length = { sum( [ p[2] for p in target_list] ) }"
        )   
