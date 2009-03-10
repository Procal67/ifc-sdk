/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCPROFILEPROPERTIES_H
#define IFC2X3_IFCPROFILEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcProfileDef;

    /**
     */
    class IFC2X3_DLL_DEF IfcProfileProperties : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'ProfileName'.
         * 
         */
        virtual IfcLabel getProfileName();
        /**
         * (const) Returns the value of the explicit attribute 'ProfileName'.
         * 
         * @return the value of the explicit attribute 'ProfileName'
         */
        virtual const IfcLabel getProfileName() const;
        /**
         * Sets the value of the explicit attribute 'ProfileName'.
         * 
         * @param value
         */
        virtual void setProfileName(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'ProfileDefinition'.
         * 
         */
        virtual IfcProfileDef *getProfileDefinition();
        /**
         * (const) Returns the value of the explicit attribute 'ProfileDefinition'.
         * 
         * @return the value of the explicit attribute 'ProfileDefinition'
         */
        virtual const IfcProfileDef *getProfileDefinition() const;
        /**
         * Sets the value of the explicit attribute 'ProfileDefinition'.
         * 
         * @param value
         */
        virtual void setProfileDefinition(const Step::RefPtr< IfcProfileDef > &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProfileProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcProfileProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProfileProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_profileName;
        /**
         */
        Step::RefPtr< IfcProfileDef > m_profileDefinition;

    };

}

#endif // IFC2X3_IFCPROFILEPROPERTIES_H
