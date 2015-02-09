require 'fileutils'

AROUND_ROOT        = ENV["AROUND_ROOT"] || File.join(File.dirname(File.expand_path(__FILE__)))
AROUND_MRUBY_ROOT  = File.join(AROUND_ROOT, "mruby")
AROUND_GEMBOX_ROOT = File.join(AROUND_ROOT, "mrbgems")

if ENV["MRUBY_CONFIG"] == File.expand_path(__FILE__)
  MRuby::Build.new do |conf|
    # load specific toolchain settings

    # Gets set by the VS command prompts.
    if ENV['VisualStudioVersion']
      toolchain :visualcpp
    else
      toolchain :gcc
    end

    conf.gembox File.join(AROUND_ROOT, "mrbgems", "around")
  end
else
  task :default => :build

  desc "Setup env"
  task :env do
    FileUtils.cd AROUND_MRUBY_ROOT

    if ENV["CONFIG"]
      ENV["MRUBY_CONFIG"] = File.join(File.expand_path(File.dirname(__FILE__)), ENV["CONFIG"])
    else
      ENV["MRUBY_CONFIG"] = File.expand_path(__FILE__)
    end
  end

  desc "Build"
  task :build => :env do
    exit sh("rake")
  end

  desc "Clean"
  task :clean => :env do
    exit sh("rake clean")
  end

  desc "Setup Project and Submodules"
  task :setup do
    sh "git submodule init"
    sh "git submodule update"
    FileUtils.cd File.join(AROUND_GEMBOX_ROOT, "mruby-qrcode")
    sh "git submodule init"
    exit sh "git submodule update"
  end
end
