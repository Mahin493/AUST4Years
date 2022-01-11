%Someone's Grandparent
parent('Kofil', 'Mahin').
parent('Kofil', 'Karin').
parent('Kofil','Ornob').
parent('Kadir', 'Kofil').

grandparent(G,Z) :- parent(X,Z), parent(G,X).

searchGrandparent :- write('Enter Grandchild Name: '), read(INPUT), write('grandparent:'),
                  grandparent(GP,INPUT), write(GP).
searchGrandparent.



