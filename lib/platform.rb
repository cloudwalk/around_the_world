class Platform
  def self.version
    "0.1.1"
  end
end

class Device
  self.adapter = Platform
end