string = gets
string.gsub!(/f\B([.]*)/,'gh\1')
string.gsub!(/F\B([.]*)/,'GH\1')
string.gsub!(/([\S]+)i([\S]+)/,'\1o\2')
string.gsub!(/([\S]+)I([\S]+)/,'\1O\2')
string.gsub!(/sh\b/,'ti')
string.gsub!(/Sh\b/,'Ti')
string.gsub!(/sH\b/,'tI')
string.gsub!(/SH\b/,'TI')
puts string
