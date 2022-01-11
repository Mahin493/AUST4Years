#Answer to Question No 1#
FAMILYLIST =   [('parent', 'GIASH', 'JARIN'),              
               ('parent', 'GIASH', 'SABRINA'),             
               ('parent', 'NAHAR',    'JARIN'),                 
               ('parent', 'NAHAR',    'SABRINA'),                
               ('parent', 'JAMAL',   'GIASH'),            
               ('parent', 'JAMAL',    'HARUN'),
                ('parent', 'JAMAL',   'UMMI'),                   
               ('parent', 'GIASH', 'ARAFAT'),             
               ]

grandparent = []
parent = []


grandchildren = input("ENTER Grandchild Name:")
for i in range(8):
    if (FAMILYLIST [i][0] == 'parent') and  (FAMILYLIST [i][2] == grandchildren):
        parent.append(FAMILYLIST[i][1])
        for j in range(8):
            if (FAMILYLIST [j][0] == 'parent') and (FAMILYLIST [i][1] == FAMILYLIST[j][2]):
                if (FAMILYLIST [j][1] not in grandparent):
                    grandparent.append(FAMILYLIST[j][1])
                    
print("GRANDPARENT :", end=' ')
print(*grandparent, sep=', ')



