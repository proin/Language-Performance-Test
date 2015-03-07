package main

import (
	"fmt"
	"strconv"
	"time"
	"os"
)

func makeTimestamp() int64 {
    return time.Now().UnixNano() / int64(time.Millisecond)
}

func hanoi(n int, a int, b int) {
	if n != 1 {
		var temp = 6-a-b
		hanoi(n-1, a, temp)
		hanoi(n-1, temp, b)
	}
}

func main() {
	argsWithoutProg := os.Args[1:]
	n, err := strconv.Atoi(argsWithoutProg[0])
	if err != nil {
		os.Exit(2)
	}
	
	var st = makeTimestamp()
	hanoi(n, 1, 2)
	var t = makeTimestamp()-st

	fmt.Println(t, "ms")
}
