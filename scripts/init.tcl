set include_prefixes {TOP.fp32_multiplier}   ;# FP32 multiplier module signals
proc starts_with_any {name prefixes} {
  foreach p $prefixes { if {[string first $p $name] == 0} { return 1 } }
  return 0
}
set n [gtkwave::getNumFacs]
set sigs {}
for {set i 0} {$i < $n} {incr i} {
  set f [gtkwave::getFacName $i]
  if {[starts_with_any $f $include_prefixes]} { lappend sigs $f }
}
gtkwave::addSignalsFromList $sigs
gtkwave::/Time/Zoom/Zoom_Full
