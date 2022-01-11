ParentList =    [('parent', 'Kofil', 'Mahin'),              
               ('parent', 'Kofil', 'Karin'),             
               ('parent', 'Kofil','Ornob'),                 
               ('parent', 'Kadir',    'Kofil'),                
               ('parent', 'Kadir',   'Bachhu'),            
               ('parent', 'Kadir',    'Roshena')
               

               ]
boy =['Kadir', 'Kofil', 'Mahin','Bachhu','Ornob']
girl = ['Karin', 'Roshena']
grandparent = []
parent = []
brother= []
sister = []
uncle = []
aunt = []
grandchildren = input("ENTER Name:")
for i in range(6):
    if (ParentList[i][0] == 'parent') and  (ParentList[i][2] == grandchildren):
        parent.append(ParentList[i][1])
        for j in range(6):
            if (ParentList[j][0] == 'parent') and (ParentList[i][1] == ParentList[j][2]):
                if (ParentList[j][1] not in grandparent and  (ParentList[j][1] in boy)):
                    grandparent.append(ParentList[j][1])
                    for k in range(6):
                        if (ParentList[k][0] == 'parent') and  (j != k) and  (ParentList[j][1] == ParentList[k][1]):
                            if (ParentList[k][2] not in uncle and  (ParentList[k][2] in boy)):
                                uncle.append(ParentList[k][2])
                            for l in range(6):
                                if (ParentList[l][0] == 'parent') and  (j!= l) and  (ParentList[k][2] == ParentList[l][2]):
                                    if (ParentList[l][2] not in aunt and (ParentList[l][2] in girl)):
                                        aunt.append(ParentList[l][2])

            elif (ParentList[j][0] == 'parent') and (i != j) and  (ParentList[i][1] == ParentList[j][1]):
                if (ParentList[j][2] not in brother and (ParentList[j][2]  in boy)):
                   brother.append(ParentList[j][2])
                elif (ParentList[j][2] not in sister and (ParentList[j][2] in girl)):
                    sister.append(ParentList[j][2])
                    print("BROTHER :", end=' ')
print(*brother, sep=', ')
print("SISTER :", end=' ')
print(*sister, sep=', ')
print("UNCLE :", end=' ')
print(*uncle, sep=', ')
print("AUNTY :", end=' ')
print(*aunt, sep=', ')
