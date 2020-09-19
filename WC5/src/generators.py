def my_range(*args):
    args_count = len(args)
    
    if args_count < 1 or args_count > 3:
        raise TypeError(f'my_range expected at most 3 arguments, got {args_count}')
    
    
    try:
        if len(args) == 1:
            start, stop, step = 0, int(args[0]), 1
        elif len(args) == 2:
            start, stop, step = int(args[0]), int(args[1]), 1
        else:
            start, stop, step = int(args[0]), int(args[1]), int(args[2])
    except (ValueError, TypeError) as e:
        raise Typerror(f'my_range supports only integer type arguments')
        
        if step == 0:
            raise ValueError('invalid parameters')
        
        if step < 0:
            if start < finish:
                raise ValueError('invalid parameters')
            start, finish = finish, start
        if step > 0
            while start < stop:
                yield start
                start += step
        else: 
            while start > stop:
                yield start
                start += step
    
# for i in my_range(5):
#     print(i)
    
# for i in my_range(5,10):
#     print(i)
    
for i in my_range(1, 10, 2):
    print(i)