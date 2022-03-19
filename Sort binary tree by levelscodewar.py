def tree_by_levels(node):
    a, b = [], [node]
    while(b):
        res = b[0]
        b.pop(0)
        if res:
            a.append(res.value)
            b +=[res.left,res.right]
    return a
