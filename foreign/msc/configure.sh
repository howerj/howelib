#!/bin/bash
( 
        cd /usr/include; 

        for i in *; do 
                echo -n "checking for $i... "; 
                sleep $(
                                expr index $(date | cksum | sed 's/ ..$//') 5
                        ); 
                echo "yes"; 
        done 
)
