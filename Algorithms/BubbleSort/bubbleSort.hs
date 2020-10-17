bubbleSort = foldr bubbleSortSwap []

bubbleSortSwap x [] = [x]
bubbleSortSwap x (y:xs) = min x y : bubbleSortSwap (max x y) xs
