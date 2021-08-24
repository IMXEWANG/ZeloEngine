-- panel
-- created on 2021/8/21
-- author @zoloypzuo
require("common.table_util")
local WidgetContainerMixin = require("ui.widget_container_mixin")

local __PANEL_ID_INCREMENT = 0
local function GenPanelID()
    __PANEL_ID_INCREMENT = __PANEL_ID_INCREMENT + 1
    return __PANEL_ID_INCREMENT
end

local APanel = Class(function(self)
    WidgetContainerMixin.included(self)
    self.id = "##" .. GenPanelID()
    self.enabled = true
end):include(WidgetContainerMixin)

function APanel:Update()
    if self.enabled then
        self:_UpdateImpl()
    end
end

function APanel:_UpdateImpl()
    error("implemented by derived class")
end

return APanel