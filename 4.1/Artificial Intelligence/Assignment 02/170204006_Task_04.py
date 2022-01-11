ROW = 8
COL = 8
board = [
    (0,'Q',0,0,0,0,'Q','Q'),
    (0,0,0,0,0,0,0,0),
    (0,0,0,0,0,'Q',0,0),
    (0,0,0,0,'Q',0,0,0),
    (0,0,'Q',0,0,0,0,0),
    ('Q',0,0,0,0,0,0,0),
    (0,0,0,'Q',0,0,0,0),
    (0,0,0,0,0,0,'Q',0), 
]

L = []

for i in range(ROW):
    for j in range(COL):
        if board[j][i] == 'Q':
            L.append([j , (j,i)])

print('\nL = ', L)

right = 0
for queen in L:
    position = queen[1]
    row =  position[0]
    col = position[1]
    range_start = col+1
    range_end = COL
    for i in range(range_start,range_end):
        if board[row][i] == 'Q' :
            right += 1

print('\nRight (face to face in the row) = ',right)

dia_down = 0
for queen in L:
    position = queen[1]
    row =  position[0]
    col = position[1]
    range_start = row + 1
    range_end = COL - col
    j = 1
    for i in range(range_start,range_end):
        if board[row+j][col+j] == 'Q' :
            dia_down += 1

        j += 1

print('Diagonally down (face to face diagonally down )= ',dia_down)


dia_up = 0
for queen in L:
    position = queen[1]
    row =  position[0]
    col = position[1]
    range_start = 0
    range_end =  row 
    j = 1

    for i in reversed(range(range_start,range_end)):
        if i == -1 or col+j == COL:
            break
        if board[i][col+j] == 'Q' :
            dia_up += 1
        j += 1
        
print('Diagonally up ((face to face diagonally up) = ',dia_up)
print(f"\nh(l) = {right + dia_down + dia_up}")




