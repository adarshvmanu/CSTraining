expression=input("Enter the Expression : ")
stack=[]
openlist=['{','(','[']
openclose={
    '{':'}',
    '(':')',
    '[':']'
}
for i in expression:
    if i in '{[(':
        stack.append(i)
    elif i in '}])':
        if not stack or stack[-1]!=openclose[i]:
            print("Unbalanced")
            break
        stack.pop()
        
    
    