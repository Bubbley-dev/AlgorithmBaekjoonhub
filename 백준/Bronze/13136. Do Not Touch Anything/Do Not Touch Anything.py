Row, Col, N = map(int,input().split()) # 세로, 가로, 범위(N * N)

need_row = int(Row/N)
if Row%N > 0 : need_row += 1

need_col = int(Col/N)
if Col%N > 0 : need_col += 1

print(need_col * need_row)