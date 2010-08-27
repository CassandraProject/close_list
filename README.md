# close_list #
### close_list is a C program used to close a Foxboro I/A OM list ###

`close_list` is a C program used to close a Foxboro I/A OM list by list number.
I have succesfully compiled and used it on UNIX workstation with versions 
ranging from 6.x to 7.x

It should only be used to close lists that are `orphaned` or when their 
controlling process no longer exists. the `som` and `rsom` utilities can
be used to determine this.

## Compilation ##

Clone the repo from GitHub:

    git clone git://github.com/CassandraProject/close_list.git

The included Makefile is setup to use the GNU C compiler, it will have to
be modified to be used with the Sun C compiler. 

If you didn't use git on an AW, then you will need to transfer the directory to
a Foxboro AW to compile by runnimg `make`

## Command line operation ##

The invocation of the program is:

    ./close_list <ID>  
    
Where <ID> is the ID of the list you want to close.

## Contributing ##

Contributions to close_list are welcome.

## Thanks ##

The following people have contributed patches to  close_list - thanks!

* [Jeremy Milum](http://github.com/jmilum)
