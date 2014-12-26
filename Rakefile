require 'fileutils'
require 'rake/clean'

AROUND_ROOT = ENV["AROUND_ROOT"] || File.join(File.dirname(File.expand_path(__FILE__)))
MRUBY_ROOT  = File.join(AROUND_ROOT, "mruby")

if ENV["MRUBY_CONFIG"]
  MRuby::Build.new do |conf|
    # load specific toolchain settings

    # Gets set by the VS command prompts.
    if ENV['VisualStudioVersion']
      toolchain :visualcpp
    else
      toolchain :gcc
    end

    conf.gembox File.join(AROUND_ROOT, "mrbgems", "around.box")
  end
end

desc "Setup env"
task :env do
  FileUtils.cd MRUBY_ROOT
  ENV["MRUBY_CONFIG"] = File.expand_path(__FILE__)
end

desc "Build"
task :build => :env do
  exit sh("rake")
end

desc "Clean"
task :clean => :env do
  exit sh("rake clean")
end
