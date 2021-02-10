Exercise 1 - Theory questions
-----------------------------
 
 ### What is the difference between concurrency and parallelism?
 > Concurrency is when two tasks run in an overlapping time manner, but not simultaneously. That is, one task run for a bit, and then the processor switches to another task and then switces back and keep swithcing. If something is run in paralell they do not interrupt each other and actually run at the same time. 
 
 ### Why have machines become increasingly multicore in the past decade?
 > The reason for this is because the rate of hardware progress of a single core and clock speed hasn't been increasing that much, and one has discovered that its possible to run tasks in paralell on multiple processors to achieve faster performance. 
 > 
 
 ### Why do we divide software (programs) into concurrently executing parts (like threads or processes)?
 (Or phrased differently: What problems do concurrency help in solving?)
 > Concurrency can help solving a great deal of problems. Say you have a buch of calculations that doesnt depend on one anther. If you set four CPU cores on these calculations in stead of one you could solve it 4 times faster (in theory) as a paralell example. If you are making something that is interacting with several IO devices, you could potentially have to wait for the IO to respond, but with concurrency you cold do useful stuff in the meantime. And a lot of other demands. 
 
 ### Does creating concurrent programs make the programmer's life easier? Harder? Maybe both?
 (Come back to this after you have worked on part 4 of this exercise)
 > Concurrency can make for faster, and more robust software. If your program crashes on a sigle thread, there is "no" potential way of making it restart by itself for example, wheras with multiple threads you could have them restart each other if they crash. However, concurrency introduces a lot of complexety to the the program as a whole, so it's more a challenge for the programmer to be able to structure the program and threads in such a way that there will be no errors. 
 
 ### What is the conceptual difference between threads and processes?
 > A process is what we call a program when it goes from being only a set of instructions to be active and loaded into memory. Threads are separate "processes" within a process that has their own unique registers, like PC, MPC, RI and so on. The conceptual difference between a process and a thread is a thread share memory with each other within a process whereas processes dont share memmory. 
 
 ### Some languages support "fibers" (sometimes called "green threads") or "coroutines"? What are they?
 > Coroutines are light weight "threads" and a way for the programmer to get more control of the switching between tasks. When using threads, the switching is decided preemptively according to the operating systems scheduler, whereas the coroutine be swiched at a language level. 
 
 ### What is the Go-language's "goroutine"? A C/POSIX "pthread"?
 > Goroutines are functions/methods that can be run concurrent of other functions and are more lightweight than "threads" and runs on top of the OS threads. The POSIX threads is an API-thread standard that are implemented on a number of operating systems. Using these API's in C allows us to use threads managed by the OS scheduler. 


 
 ### In Go, what does `func GOMAXPROCS(n int) int` change? 
 > the GOMAXPROCS function sets a limit to the number of operating system threads a single go process can utilize. 



 
 
 
 
