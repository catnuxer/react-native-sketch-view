require 'json'
version = JSON.parse(File.read('package.json'))["version"]

Pod::Spec.new do |s|

  s.name           = "P41Sketch"
  s.version        = version
  s.summary        = "P41Sketch"
  s.homepage       = "https://github.com/keshavkaul/react-native-sketch-view"
  s.license        = "MIT"
  s.author         = { "Keshav Kaul" => "kaul.keshav@gmail.com" }
  s.platform       = :ios, "9.0"
  s.source         = { :git => "https://github.com/keshavkaul/react-native-sketch-view.git", :tag => "v#{s.version}" }
  s.source_files   = 'ios/*.{h,m}'
  s.requires_arc = true
  s.preserve_paths = "**/*.js"
  s.dependency 'React'

end
