CS 240 Assignment #1
Objective: Investigation of processes and the resources they use on the
Linux system.
Description:
Part 1 Write a simple program to display (print) its name, process ID (PID)
and an iteration count to stderr every second. Use sleep() to delay the
output.
Part 2 Investigate the impact of running CPU and I/O intensive jobs. Write
two small programs that contain infinite loops (modify the program created
in part 1) to perform:
1. Perform a simple arithmetic calculation, e.g., incrementing a counter.
2. Open a file, write a single character into the file and close it.
Use top to see what processes the system is using. Try to understand
what processes are running and interpret the information displayed for each
process, i.e., interpret the columns.
Execute your first (CPU intensive) program in the background. Recall
that a process can be executed in the background by placing an & (ampersand) at the end of your command, e.g., a.out &.
Figure out how you can start a process, stop it, and start it again, run
it in the foreground and send it to the background. Use top to see what
processes the system is using.
Execute your second (I/O intensive) program in the background. Use
top to see what processes the system is using.
Execute both programs in the background. Again, use top to see what
processes the system is using.
Verify that you actually killed your infinite loop programs!
Part 3 Determine as many statistics about the processes as you can find.
For example, what is the size (in bytes) of the program? How much is code;
how much is data? How much memory does it occupy while executing?
The Unix/Linux utilities kill, ps, top, and objdump are very useful. You
may find some others while researching these utilities.
Deliverables:
• Summary—a discussion of your findings, i.e., the effects of your applications.
• Output—Neatly formatted and documented.
• Programs—fully documented. All functions should be fully documented
also
