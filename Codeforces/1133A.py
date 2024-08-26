h1, m1 = map(int, input().split(':'))
h2, m2 = map(int, input().split(':'))

actual_m1 = h1 * 60 + m1
actual_m2 = h2 * 60 + m2
ans_m = (actual_m1 + actual_m2)//2
print(f"{int(ans_m/60) if int(ans_m/60) >9 else '0'+str(int(ans_m/60))}:{ans_m%60 if ans_m%60>9 else '0'+str(ans_m%60)}")