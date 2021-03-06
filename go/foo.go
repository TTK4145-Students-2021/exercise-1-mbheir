// Use `go run foo.go` to run your program

package main

import (
	. "fmt"
	"runtime"
	"sync"
	// "time"
)

var i = 0
var number_of_iterations = 1000000

func incrementing(wg sync.WaitGroup) {
	for inc := 0; inc < number_of_iterations; inc++ {
		i++
		Println(i)
	}
	wg.Done()

}

func decrementing(wg sync.WaitGroup) {
	for inc := 0; inc < number_of_iterations; inc++ {
		i--
	}
	wg.Done()
}

func main() {
	runtime.GOMAXPROCS(runtime.NumCPU()) // I guess this is a hint to what GOMAXPROCS does...
	// Try doing the exercise both with and without it!

	// TODO: Spawn both functions as goroutines
	var wg sync.WaitGroup
	wg.Add(2)

	go incrementing(wg)

	go decrementing(wg)

	//I implemented a simple waitgroup to solve the issue with waiting for the goroutines to finish.
	wg.Wait()

	Println("The magic number is:", i)
}
