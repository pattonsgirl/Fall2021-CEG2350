## Intro topics

1. How did the modern computer come to be?
2. Shells
   - Windows: powershell, cmd
   - Linux / Mac: bash, sh, zsh
3. Terminals:
   - MobaXTerm
   - WSL2
   - Any program that lets you interact with a shell
4. SSH
   - the command ssh
   - private key files (where go and what permissions)
   - public keys (go where)

## Files, directories, and OS structure

1. OS structure in Linux (and Mac) vs Windows
2. Files vs directories
   - Commands: ls, cp, mkdir, rmdir, vim, mv, rm, cd, cat, touch, head/tail, less/more
3. Importance of names and extensions (file)
4. Ownership & sharing
   - rwx permissions in Linux (and Windows counterpart)
   - user vs. group vs. other
   - chmod, chown, chgrp
   - User types and groups: sudo vs. admin vs. “other” (sudo, adduser, deluser)
5. PATH

## Scripting

1. Aliases & customizations (.bashrc, .profile)
2. Commands: grep, ~~diff~~, find, ~~file~~, wc, sort, uniq, whereis, which
3. IO redirection (<, >, |, tee)
4. executing scripts (source, ./, PATH)
5. Scripting languages: bash
   - variables
   - conditionals (`test`)
   - arguments
   - if
   - for
   - while
6. Regular expressions
7. Requiring root to run

## Computer Hardware, Boot Process, and Data on Disks:

1. Computer Hardware:
   - Von Neumann machine: Control unit; instruction fetch, decode, and execution
   - CPU
   - RAM
   - Motherboard
   - Disks (HDD, SSD, NVME)
   - GPU
2. Booting of OS
   - Power on self-test (POST)
   - BIOS vs UEFI
   - MBR vs GPT
   - Boot loaders: NTLDR, GRUB
   - kernel vs OS
3. Virtual memory
   - What is it and how does it work
4. Disks
   - MBR vs GPT
   - partitions
   - filesystems
   - sectors vs blocks vs inodes
   - fragmentation

## Virtual Machines

1. Set of resources virtually "defined"
2. Resource allocation managed by hypervisor
3. Can install an operating system to a disk using an iso (machine image)
4. What can you do in a virtual machine?

## Git (version control)

1. Git remote (servers) vs. clients (local)
2. Basic commands:

   - clone
   - add
   - commit
   - push
   - pull
     - fetch
     - merge
   - branch
   - checkout
   - merge

## Command line programming

1. Interpreters
2. Compilers
   - c / c++
     - Linux ELF (Executable & Linkable Format)
     - Windows EXE
3. Makefiles
4. Memory handling in programming
   - size of memory - Bits (1), bytes (8 bits), word (16, 32, or 64 bits)
   - stack vs. heap
5. Libraries & dynamic linking (loads and links the shared libraries needed by an executable when it is executed)
6. Overview of command line debugging
7. Install from source w/ make or installation scripts

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
11. Hard links & soft links (ln)
12. Inodes
13. File locks

## Processes

1. Task Manager (Linux [top] vs. Windows)
2. init process / kernel level vs user level processes
   1. parent vs child process
3. System calls & signals
   1. systemd / init - systemctl & journalctl
   2. Fork & exec
   3. wait & exit
   4. zombie and orphan process states
4. Thread vs Fork
5. Process scheduling & priorities
6. CPU & kernel memory management
   - page faults (minor & major)
7. Single CPU multi-tasking
8. Multiple CPUs and SMP (Symmetric multiprocessing)
9. Commands: kill, ps, top, nice, bg, fg, jobs, screen

## Networking

9. OSI layers (encapsulation / packets, application, transport, network, datalink, physical)
1. Host names, IP addresses, Subnets, DNS, URLs
1. Protocols: HTTP vs HTTPS
1. TCP and UDP
1. Ports vs sockets, clients and servers, secure shell, sftp
   - Application opens a socket which is connected to a port
1. X11 in terms of graphical “forwarding” and role of a GUI
1. Web browsers (URLs, SSL certs) and clients (ping, wget, traceroute)
1. Physical pieces of a network
   - hosts, routers, switches, ISPs, wireless, LAN
1. Firewalls

## System Administration

1. Updates (Linux vs. Windows)
   - Linux - apt / package manager update request
   - Windows - click button, prod server
2. Virus scanning & types of computer diseases
3. Creating archives, password locking files

   - Compression (gzip, tar)

4. Torrents
