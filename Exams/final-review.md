5. ~~Hard links & soft links (ln)~~
6. ~~Inodes~~
7. ~~File locks~~
7. ~~Alternate data streams (od, /dev/null) ~~
5. Compression (gzip, tar)
6. File systems: vfat, ntfs, ext
    - implementations / fragmentation / performance
7. Network file share: SFTP, NFS, Samba
8. Commands: df, du, mount, umount, etc/fstab

## What is computer?

1. Operating systems as jargon – Windows, Linux, Mac
2. Linux distributions: Debian, RedHat, etc
3. Intro to course tools (AWS & MobaXTerm)
4. Intro to shells (bash, sh, zsh, powershell, ssh) and commands (man, vim, history)
5. Intro to ssh & key pairs
6. Intro to git (clone, commit, push, add)

## Files, directories, and OS structure

1. OS structure in Linux (and Mac) vs Windows
2. Files vs directories
    - Commands: ls, cp, mkdir, rmdir, vim, mv, rm, cat, touch, head/tail, less/more
3. Importance of names and extensions (file)
4. Ownership & sharing 
    - rwx permissions in Linux (and Windows counterpart)
    - user vs. group vs. other
    - chmod, chown
    - User types and groups: sudo vs. admin vs. “other” (sudo, adduser, deluser)
5. Hard links & soft links (ln)
6. Inodes
7. File locks

## Scripting

1. Aliases & customizations (.bashrc, .vimrc)
2. Commands: grep, diff, find, file, wc, sort, uniq, whereis, which
3. IO redirection (<, >, |, tee)
4. PATH (order of execution)
5. Scripting languages: bash, python
6. Regular expressions (grep, sed, test)
7. Alternate data streams (od, /dev/null) 
8. Requiring root to run

## Command line programming

1. Assembly/machine language programming
- Bits (1), bytes (8 bits), word (16, 32, or 64 bits)
2. Interpreters
3. Libraries & dynamic linking (loads and links the shared libraries needed by an executable when it is executed)
4. Memory handling in programming (static vs. stack vs. heap)
5. Makefiles
6. Compiling programs (Linux is not Windows)
- Linux ELF (Executable & Linkable Format)
- Windows EXE
7. Overview of command line debugging
8. Commands: ldd, make

## Data storage and access:

1. RAM vs. ROM (SSDs vs HDDs)
    - Suspend vs hibernation of an OS
    - Virtual memory & swap tables (one go) / paging (chunking)
2. Booting of OS
    - Von Neumann machine: Control unit; instruction fetch, decode, and execution
    - Power on self-test (POST)
    - BIOS vs UEFI
    - Boot loaders: NTLDR, GRUB
3. Fragmentation
4. Sequential and random access
5. Compression (gzip, tar)
6. File systems: vfat, ntfs, ext
    - implementations / fragmentation / performance
7. Network file share: SFTP, NFS, Samba
8. Commands: df, du, mount, umount, etc/fstab
9. MBR vs GPT
10. Devices and drivers

## Processes

1. Task Manager (Linux [top] vs. Windows)
2. init process / kernel level vs user level processes
    1. parent vs child process
3. System calls (way for programs / APIs to interact with the operating system)
    1. systemd - systemctl & journalctl
    2. Fork & exec
4. Commands: kill, ps, top, nice, bg, fg, jobs, nohup, killall, screen
5. Preemptive (interruptible) and non-preemptive scheduling, priorities, signals
6. CPU & kernel memory management
7. Thread vs Fork
8. Single CPU multi-tasking 
9. Multiple CPUs and SMP (Symmetric multiprocessing)

## Git (version control)

1. Git servers vs. clients
2. Basic commands: push, pull, commit, add, init, clone, branching, custom configurations 

## Networking

1. Host names, IP addresses, Subnets, DNS, URLs
2. Protocols: HTTP vs HTTPS
3. TCP and UDP
4. Ports vs sockets, clients and servers, secure shell, sftp
    - Application opens a socket which is connected to a port
5. X11 in terms of graphical “forwarding” and role of a GUI
6. Web browsers (URLs, SSL certs) and clients (ping, wget, traceroute)
7. Physical pieces of a network
    - hosts, routers, switches, ISPs, wireless, LAN
8. Firewalls
9. OSI layers (encapsulation / packets, application, transport, network, datalink, physical)

## System Administration

1. File system & hardware integrity
2. Updates (Linux vs. Windows)
    - .vimrc
3. Installing packages with make
4. systemctl & journalctl
5. Virus scanning & types of computer diseases
6. Creating archives, password locking files
7. System restore (automatic, manual, backups)
8. Windows Registry
9. Passwords: /etc/passwd, /etc/shadow
10. Boot scripts & init.d
11. Access Control List (ACL)
12. Open source movement
13. Torrents?
14. Commands: write, finger, who, mesg

## Computer-ception

1. Virtual machines (GUI style) and hypervisors
2. Containers 
3. Cloud computing (Google, AWS, Azure) & basic terminology
    - Storage buckets, cloud networking, heavy computation
