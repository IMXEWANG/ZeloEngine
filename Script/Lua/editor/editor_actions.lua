-- editor_actions
-- created on 2021/8/25
-- author @zoloypzuo
local EditorActions = Class(function(self)

end)

function EditorActions:MoveToTarget()
    print("MoveToTarget")
end

function EditorActions:DelayAction(delayInFrame, action, ...)
    delayInFrame = delayInFrame or 1
    scheduler:ExecuteInTime(delayInFrame * FRAME, self[action], nil, ...)
end

function EditorActions:DestroyEntity()
    print("DestroyEntity")
end

function EditorActions:UnselectEntity()
    print("UnselectEntity")
end

function EditorActions:DuplicateEntity(entityToDuplicate, forcedParent, focus)
    -- Entity, Entity, bool
    print("DuplicateEntity", entityToDuplicate, forcedParent, focus)
end

TheEditorActions = EditorActions()