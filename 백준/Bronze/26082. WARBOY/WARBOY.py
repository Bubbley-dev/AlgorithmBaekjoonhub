A, B, C = map(int, input().split())

#warboy의 가격대비성능은 경쟁사의 3배
#성능은 가격대비성능 * 가격
print(int(3 * (B/A) * C))