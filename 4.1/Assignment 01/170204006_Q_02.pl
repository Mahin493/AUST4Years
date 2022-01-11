parent('Kofil', 'Mahin').
parent('Kofil', 'Karin').
parent('Kofil','Ornob').
parent('Kadir', 'Kofil').
parent('Kadir','Bachhu').
parent('Kadir','Roshena').


boy('Kofil').
boy('Mahin').
boy('Ornob').
boy('Bachhu').
girl('Karin').
girl('Nova').
girl('Roshena').

uncle(U,M):-parent(Y,M),parent(Z,Y),parent(Z,U),boy(U), not(Y=U).
aunty(A,M):-parent(Y,M),parent(Z,Y),parent(Z,A),girl(A),not(Y=A).
brother(B,X):- parent(Y,X),parent(Y,B),boy(B),not(X=B).
sister(S,X):- parent(Y,X),parent(Y,S),girl(S),not(X=S).


searchUncle :- write(' Enter Nephew Name: '), read(INPUT), write('Uncle:'),
		uncle(UNCLE,INPUT ), write(UNCLE), tab(5), fail.
searchUncle.

searchAunty :- write(' Enter Nephew name:  '), read(INPUT), write('AUNTY is : '),
		aunty(AUNTY,INPUT ), write(AUNTY), tab(5), fail.
searchAunty.

searchBrother:- write(' Enter sibling name: '), read(INPUT), write('brother: '),
		brother(BROTHER,INPUT ), write(BROTHER), tab(5), fail.
searchBrother.
searchSister:- write(' Enter sibling name: '), read(INPUT), write('sister: '),
		sister(SISTER,INPUT ), write(SISTER), tab(5), fail.
searchSister.

