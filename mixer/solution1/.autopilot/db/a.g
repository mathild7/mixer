#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /root/repo/new/ECE1373_GhostSynth/modules/mixer/mixer/solution1/.autopilot/db/a.g.bc ${1+"$@"}
