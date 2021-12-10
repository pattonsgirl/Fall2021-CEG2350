# Final Exam Fall 2021

## Written Commands

1. In a directory, I have a tar'red and compressed file named glomp.tar.gz
   Write a command or series of command to unpack the contents to the folder bork.

   - tar -xfz glomp.tar.gz -C bork OR tar -xf glomp.tar.gz -C bork
     - x = extract files
     - f = tar archive name
     - z = Work on .tar.gz (gzip) file format
     - C = Set dir name to extract files
     - v = Verbose output i.e. show progress on screen
   - https://www.cyberciti.biz/faq/howto-extract-tar-file-to-specific-directory-on-unixlinux/

2. Assume I have made a successful sftp connection to a remote machine with IP 152.45.27.90
   I have a file named shareme.txt on my machine that needs to be copied to 152.45.27.90 in the folder /home/share/all/
   Using sftp, write the steps to upload the file from my local machine, and have it in the correct folder.

   - put ./shareme.txt /home/share/all

3. I have two branches in my git repository, alpha and beta. I have made changes on the beta branch and want to merge them into the alpha branch. Write commands that will make sure I am on the correct branch, then merge the changes with alpha.

   - git checkout alpha
   - git merge beta

4. Given a Makefile with the following contents:

```
alpha: code.c
    gcc -o cappa code.c

beta: cappa
    cat code.c

delta: cappa
    ./cappa
```

Use make commands to compile and run the source code given in code.c

- make alpha OR make
  - alpha is first and therefore is the default target make will use
- make cappa

## Written Answer

1. What is the difference between copying and moving files? Reference inodes in your answer

   - moving a file on the disk does not duplicate the data, just changes the refered location by the filesystem. The inode would remain the same (as long as within the same filesystem)
   - copying a file creates a unique copy on the disk - the copy would have a unique inode
   - Favorite student answer:

     - First, we need to distinguish between a file and the file's contents. A file is a volume of information with an associated inode that specifies its location in memory -- the name, contents, and path of the file are separate and unrelated to the inode number, but are the parts of the file that the user is actually interested in and interact with.

     - Moving a file changes its path, but does not affect the inode; that is, the file does not "move" in memory, it just has a different path assigned to it.

     - Copying a file creates a second file, with its own inode number, that has the same name and contents of the first file. However, as far as the computer is concerned, these file are not related.

2. Assuming a disk fresh out of packaging, to utilize the disk to store data, what three elements must be configured?

   - partition table (MBR or GPT)
   - partitions (1 or more)
   - filesystem on the partition
   - mount the filesystem

3. Describe the file permissions provided the file information below. Include specifications for user and group in your answer.

```
-r-x-w-rw- 1 bob dev 1.7K Jun 2 22:01 README.md
```

- bob is the owner and can read and execute
- dev is the group and can write
- others on the system can read and write

4. My computer is hosting a website. My firewall is configured to allow inbound traffic to port 22 and outbound traffic to ports 80 and 443. Why can't anyone access my website?

   - Short answer: needs to allow inbound traffic to port 80 or port 443
     - websites usually listening on port 80 or port 443, and therefore the firewall needs to be ammended to allow external access from these ports.
   - port 22 is used for SSH connections and is configured for (assume any source) inbound connections - so I can SSH to the systems behind the firewall from anywere.
   - port 80 and port 443 (HTTP and HTTPS) are open for outbound connections (assume to anywhere) - which means my system can connect out to other websites (say google or comic sites)
   - port forwarding - this would involve having my application listen on a non-standard port in order to work around the firewall. This is not a recommended way to sove the problem
   - SSH'ing in will let me check some things, but still not access the website.

5. How does the system manage allocations of virtual memory in addition to physical memory?
   - Three branches of accepted answers
   - Using a hypervisor (refering to virtual machines)
   - There are two players in memory management on the system: the kernel, and the Memory Management Unit (MMU) on the CPU. The kernel keeps track of system processes and allocating them memory, but the CPU needs to know from where to load the next instruction. The MMU and kernel both keep track of this in a page table / memory map, where process space is tracked as well as where (on physical or disk storage)
   - Virtual memory is utilized to provide "extra" physical memory - inactive processes can be moved to a space on the disk while active processes stick in RAM. Additionally, virtual memory allows hybernation states so processes can resume

## Fill in the blank / short answer

1. File that contains all public keys to create an authenticated ssh connection for a given user:

   - authorized_keys
   - .ssh/authorized_keys

2. Given a network prefix of 128.34.24.1 and a subnet mask of 255.255.255.0, write the CIDR notation

   - /24
   - 24
   - 128.34.24.1/24
   - 128.34.24.0/24

3. A child process exits, but the parent process is ongoing and has not requested the child's status to terminate it / clean it up. What process status would the child process have?

   - Zombie
   - Z
   - defunct (alternative answer)
   - wait is a system call that is used by the parent to check on the the status of the child - it prevents the parent from exiting until the child is exited

4. Java, C, and C++ are examples of what type of language? Compiled or interpreted?

   - Compiled

5. What transport layer protocol has error correction capability? Worded differently, when a packet is sent from the server, the client will confirm it recieved it without error. If an error did occur in transmission, the client can request a resend of the troublesome packets.

   - TCP - Transport Control Protocol

6. I created an infinite loop, and need to end it. The process id is 45123. Command to end the process:

   - kill 45123
   - kill -9 45123
   - CTRL + C = 50%

7. The parent of all processes on a Linux based system, and the first process that is run by the kernel:

   - init
   - systemd

8. In order to use HTTPS and be trusted by modern browsers, sites need to register with a \_\_ \_\_ in order to receive a signed trusted digital certificate which is then used to encrypt communications between the server and clients
   - Certificate Authority
   - CA's provide SSL / TLS certificates

## True / False

1. IP addresses are assigned to computers / hosts on the network subnet.

   - False. IP addresses are assigned to Network Interface Cards
   - Note: Question dropped, all scores marked as 1 pt

2. SSH commonly uses port 443

   - False. Port 22

3. NAT allows a lookup of an IP address given a hostname or URL

   - False. DNS
   - NAT (Network Address Translation) changes packet source IP so that it can continue to its destination and be routed back to the original requester

4. If you have frequent page faults you may want to investigate additional memory capacity
   - True. Page faults are common, but if you have frequent major page faults you may need more memory capacity for the application(s) you are running
